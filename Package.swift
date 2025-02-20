// swift-tools-version:5.7 // Or your preferred Swift tools version


// source 'https://github.com/CocoaPods/Specs.git'
// platform :ios, '12.0'

// target 'proj-ios' do
//   pod 'PROJ', '~> 9.4.0'
//   pod 'crs-ios', '~> 1.0.5'

//   target 'proj-iosTests' do
//     inherit! :search_paths
//   end
// end

import PackageDescription

let package = Package(
    name: "proj-ios", // Name of your project/package
    platforms: [.iOS(.v12)], // iOS platform and minimum version
    products: [
        .library(
            name: "proj-ios", // Name of your library (usually the same as the package)
            targets: ["proj-ios"]), // Targets included in the library
    ],
    dependencies: [
        .package(url: "https://github.com/OSGeo/PROJ.git", from: "9.4.0"), // PROJ dependency
        .package(url: "https://github.com/kareman/crs-ios.git", from: "1.0.5"), // crs-ios dependency
    ],
    targets: [
        .target(
            name: "proj-ios",
            dependencies: [
                .product(name: "PROJ", package: "PROJ"), // Link to PROJ product
                .product(name: "crs-ios", package: "crs-ios"), // Link to crs-ios product
            ]),
        .testTarget(
            name: "proj-iosTests",
            dependencies: ["proj-ios"]), // Test target depends on the main target
    ]
)

//
//  SFPAuthorityProjections.h
//  sf-proj-ios
//
//  Created by Brian Osborn on 7/19/17.
//  Copyright © 2017 NGA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFPProjection.h"

/**
 *  Collection of projections for a single coordinate authority
 */
@interface SFPAuthorityProjections : NSObject

/**
 * Initialize
 *
 * @param authority
 *            coordinate authority
 *
 *  @return new authority projections
 */
-(instancetype) initWithAuthority: (NSString *) authority;

/**
 * Get the authority
 *
 * @return authority
 */
-(NSString *) authority;

/**
 * Get the projection for the code
 *
 * @param code
 *            coordinate code
 * @return projection
 */
-(SFPProjection *)  projectionForNumberCode: (NSNumber *) code;

/**
 * Get the projection for the code
 *
 * @param code
 *            coordinate code
 * @return projection
 */
-(SFPProjection *) projectionForCode: (NSString *) code;

/**
 * Check if the collection contains the projection
 *
 * @param projection
 *            projection
 * @return true if has the projection
 */
-(BOOL) hasProjection: (SFPProjection *) projection;

/**
 * Check if the collection contains a projection for the code
 *
 * @param code
 *            coordinate code
 * @return true if has the projection
 */
-(BOOL) hasProjectionNumberCode: (NSNumber *) code;

/**
 * Check if the collection contains a projection for the code
 *
 * @param code
 *            coordinate code
 * @return true if has the projection
 */
-(BOOL) hasProjectionCode: (NSString *) code;

/**
 * Add the projection to the authority
 *
 * @param projection
 *            projection
 */
-(void) addProjection: (SFPProjection *) projection;

/**
 * Clear all projections for the authority
 */
-(void) clear;

/**
 * Remove the projection with the code
 *
 * @param code
 *            coordinate code
 */
-(void) removeNumberCode: (NSNumber *) code;

/**
 * Remove the projection with the code
 *
 * @param code
 *            coordinate code
 */
-(void) removeCode: (NSString *) code;

/**
 * Remove the projection
 *
 * @param projection
 *            projection
 */
-(void) removeProjection: (SFPProjection *) projection;

/**
 * Get the count of authority projections
 *
 * @return count
 */
-(int) count;

/**
 * Is the collection empty?
 *
 * @return true if empty
 */
-(int) isEmpty;

/**
 * Get the projection codes
 *
 * @return projection codes
 */
-(NSArray<NSString *> *) getCodes;

/**
 * Get the projections
 *
 * @return projections
 */
-(NSArray<SFPProjection *> *) getProjections;

@end

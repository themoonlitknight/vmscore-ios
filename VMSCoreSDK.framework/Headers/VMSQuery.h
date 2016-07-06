//
//  VMSQuery.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 22/07/15.
//  Copyright (c) 2015 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VMSPredicate.h"
#import "VMSCompoundPredicate.h"

#define VMS_QUERYABLE __attribute__((annotate("vms_queryable")))

/**
 *  Defines the result type of the query.
 */
typedef NS_ENUM(NSUInteger, VMSQueryType) {
	/**
	 *  Fetch the objects.
	 */
	VMSQueryTypeObjects,
	/**
	 *  Count the objects.
	 */
	VMSQueryTypeCount,
};

/**
 *  An instance of 'VMSQuery' allows to query the local database in a totally flexible way.
 */
@interface VMSQuery : NSObject

/**
 *  The type of the results of the query.
 */
@property (nonatomic) VMSQueryType type;

/**
 *  The maximum number of objects to be returned by the query.
 */
@property (nonatomic) NSUInteger limit;

/**
 *  The predicate of the query.
 */
@property (nonatomic) VMSPredicate *predicate;

/**
 *  The class that the query is executing on.
 */
@property (nonatomic, readonly) Class entity;

/**
 *  The sort descriptors used to order the results.
 */
@property (nonatomic) NSArray *sortDescriptors;


///------------------
/// @name Instantiate
///------------------

/**
 *  Creates a new query object for the specified class.
 *
 *  @param entity The class of the entity.
 *
 *  @return The newly created query.
 */
+ (instancetype)queryWithEntity:(Class)entity;


///--------------
/// @name Execute
///--------------

/**
 *  Executes synchronously the query.
 *
 *  @param error A pointer to an error that is set upon failure, otherwise nil.
 *
 *  @return The set of results.
 */
- (id)execute:(NSError**)error;

@end

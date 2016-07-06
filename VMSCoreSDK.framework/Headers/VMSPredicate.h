//
//  VMSPredicate.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 22/07/15.
//  Copyright (c) 2015 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Defines the operators to compare two properties in the predicate.
 */
typedef NS_ENUM(NSUInteger, VMSPredicateRelation) {
	/**
	 *  The value of the property is equal to 'value'.
	 */
	VMSPredicateRelationEqualTo,
	/**
	 *  The value of the property is not equal to 'value'.
	 */
	VMSPredicateRelationNotEqualTo,
	/**
	 *  The value of the property is less than 'value'.
	 */
	VMSPredicateRelationLessThan,
	/**
	 *  The value of the property is less that or equal to 'value'.
	 */
	VMSPredicateRelationLessThanOrEqualTo,
	/**
	 *  The value of the property is greater than 'value'.
	 */
	VMSPredicateRelationGreaterThan,
	/**
	 *  The value of the property is greater than or equal to 'value'.
	 */
	VMSPredicateRelationGreaterThanOrEqualTo,
};

/**
 *  A 'VMSPredicate' instance is used in queries to compare a property's value with a specified value through an operator.
 */
@interface VMSPredicate : NSObject

/**
 *  The property whose value is to be compared to 'value'.
 */
@property (nonatomic, copy, readonly) NSString *property;

/**
 *  The value to compare to the value of the property.
 */
@property (nonatomic, readonly) id value;

/**
 *  The operator used to compare the value of the property with 'value'.
 */
@property (nonatomic, readonly) VMSPredicateRelation predicateRelation;

/**
 *  Creates a new predicate.
 *
 *  @param property          The property whose value is to be compared.
 *  @param predicateRelation The operator used in comparison.
 *  @param value             The value used in comparison.
 *
 *  @return The newly created predicate.
 */
+ (instancetype)predicateWithProperty:(NSString *)property
							 relation:(VMSPredicateRelation)predicateRelation
								value:(id)value;

@end

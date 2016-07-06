//
//  VMSCompoundPredicate.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 22/07/15.
//  Copyright (c) 2015 vms.me. All rights reserved.
//

#import "VMSPredicate.h"

/**
 *  Defines the type of a compound predicate.
 */
typedef NS_ENUM(NSUInteger, VMSCompoundPredicateType) {
	/**
	 *  A logical AND.
	 */
	VMSCompoundPredicateTypeAnd,
	/**
	 *  A logical OR.
	 */
	VMSCompoundPredicateTypeOr,
};

/**
 *  This class allows to combine multiple predicates through an operator.
 */
@interface VMSCompoundPredicate : VMSPredicate

/**
 *  The type of the compound predicate.
 */
@property(readonly) VMSCompoundPredicateType compoundPredicateType;

/**
 *  The predicates that are to be compared.
 */
@property(readonly, copy) NSArray *subpredicates;

/**
 *  Creates a new compound predicate.
 *
 *  @param type          The type of the compound predicate.
 *  @param subpredicates An array of 'VMSPredicate'.
 *
 *  @return The newly created compound predicate.
 */
- (instancetype)initWithType:(VMSCompoundPredicateType)type subpredicates:(NSArray*)subpredicates;

@end

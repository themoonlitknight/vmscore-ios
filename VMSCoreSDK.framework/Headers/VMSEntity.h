//
//  VMSEntity.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 19/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  The base class for all entities that model database records.
 */
@interface VMSEntity : NSObject

/**
 *  A unique identifier for the entity.
 *
 *  @return The identifier.
 */
- (NSString*)objectID;

/**
 *  Compare the receiver to another entity.
 *
 *  @param other Another entity.
 *
 *  @return Whether the two objects refer to the same record.
 */
- (BOOL)equalsTo:(VMSEntity*)other;

@end

//
//  VMSMessageContext.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 17/12/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VMSMessageContext : NSObject

@property (nonatomic, readonly) NSString *text;

@property (nonatomic, readonly) NSDictionary *extra;

- (instancetype)initWithText:(NSString*)text extra:(NSDictionary*)extra;

@end

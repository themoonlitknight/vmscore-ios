//
//  VMSMessageExtra.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 12/01/16.
//  Copyright © 2016 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VMSMessageExtra : NSObject

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *image;
@property (nonatomic, readonly) NSString *link;
@property (nonatomic, readonly) NSDictionary *extra;

- (instancetype)initWithText:(NSString*)text image:(NSString*)image link:(NSString*)link extra:(NSDictionary*)extra;

@end

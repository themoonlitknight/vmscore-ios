//
//  VMSContactSpecial.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 26/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSActor.h"
#import "VMSTypes.h"
#import "VMSQuery.h"

@class VMSChatSession;

@interface VMSContactSpecial : VMSActor

@property (nonatomic, readonly) NSString *name VMS_QUERYABLE;

@property (nonatomic, readonly) NSString *address VMS_QUERYABLE;

@property (nonatomic, readonly) NSString *addressLabel;

@property (nonatomic, readonly) VMSContactSpecialType contactSpecialType VMS_QUERYABLE;

@end

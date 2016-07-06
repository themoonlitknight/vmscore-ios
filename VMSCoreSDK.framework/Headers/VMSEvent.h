//
//  VMSEvent.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 16/12/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSEntity.h"
#import "VMSTypes.h"

@class VMSMessage;

@interface VMSEvent : VMSEntity

@property (nonatomic, readonly) VMSEventType eventType;

@property (nonatomic, readonly) NSString *target;

@property (nonatomic, readonly) VMSMessage *message;

@end

//
//  VMSDebugViewController.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 14/04/16.
//  Copyright © 2016 vms.me. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XMPPPing;

@protocol VMSDebugViewControllerDelegate <NSObject>

- (void)debugViewControllerDidClose;

@end

@interface VMSDebugViewController : UIViewController

@property (nonatomic, weak) id<VMSDebugViewControllerDelegate> delegate;

@property (nonatomic, readonly) XMPPPing *xmppPing;

@end

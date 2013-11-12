//
//  MPNotificationSmallViewController.h
//  HelloMixpanel
//
//  Created by Kyle Warren on 11/11/13.
//  Copyright (c) 2013 Mixpanel. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MPNotification;
@protocol MPNotificationSmallViewControllerDelegate;

@interface MPNotificationSmallViewController : UIViewController

@property (nonatomic, retain) MPNotification *notification;
@property (nonatomic, retain) UIViewController *parentController;
@property (nonatomic, assign) id<MPNotificationSmallViewControllerDelegate> delegate;

- (id)initWithPresentedViewController:(UIViewController *)controller notification:(MPNotification *)notification;
- (void)show;
- (void)hideWithAnimation:(BOOL)animated;

@end

@protocol MPNotificationSmallViewControllerDelegate <NSObject>

- (void)notificationSmallControllerWasDismissed:(MPNotificationSmallViewController *)controller status:(BOOL)status;

@end

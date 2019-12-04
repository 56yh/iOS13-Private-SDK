//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUConfigurationViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIViewController;
@protocol HUConfigurationViewController, HUConfiguratorDelegate;

@interface HUConfigurator : NSObject <HUConfigurationViewControllerDelegate>
{
    NSMutableArray *_displayedViewControllers;
    id <HUConfiguratorDelegate> _configuratorDelegate;
}

@property(readonly, nonatomic) NSArray *displayedViewControllers; // @synthesize displayedViewControllers=_displayedViewControllers;
@property(nonatomic) __weak id <HUConfiguratorDelegate> configuratorDelegate; // @synthesize configuratorDelegate=_configuratorDelegate;
- (void)_removeDisplayedViewController;
- (void)_addViewControllerToDisplay:(id)arg1;
- (id)_nextViewControllerForResults:(id)arg1;
- (void)viewControllerDidGoBack:(id)arg1;
- (void)viewController:(id)arg1 didFinishWithConfigurationResults:(id)arg2;
- (void)viewControllerWillAppear:(id)arg1;
- (void)popViewController;
- (void)pushViewControllerForResults:(id)arg1;
@property(readonly, nonatomic) UIViewController<HUConfigurationViewController> *currentViewController;
- (id)initWithConfiguratorDelegate:(id)arg1 initialViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


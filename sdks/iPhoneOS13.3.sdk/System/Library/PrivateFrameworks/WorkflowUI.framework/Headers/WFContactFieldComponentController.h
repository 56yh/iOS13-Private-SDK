//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponentController.h>

#import <WorkflowUI/WFContactFieldDelegate-Protocol.h>

@interface WFContactFieldComponentController : CKStatefulViewComponentController <WFContactFieldDelegate>
{
    BOOL _mounted;
}

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)newStatefulView:(id)arg1;
@property(nonatomic, getter=isMounted) BOOL mounted; // @synthesize mounted=_mounted;
- (id)viewControllerContainingContactField:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)didMount;
- (void)willUnmount;
- (void)didAcquireStatefulView:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKComponentController.h>

#import <WorkflowUI/WFAppSearchViewControllerDelegate-Protocol.h>

@class NSString;

@interface WFAppPickerParameterComponentController : CKComponentController <WFAppSearchViewControllerDelegate>
{
}

- (void)appSearchViewController:(id)arg1 didFinishWithApp:(id)arg2;
- (void)appSearchViewControllerDidCancel:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


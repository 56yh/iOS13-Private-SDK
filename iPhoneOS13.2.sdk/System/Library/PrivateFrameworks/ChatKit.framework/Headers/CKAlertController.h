//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <ChatKit/CKAdaptivePresentedControllerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol CKAlertControllerDelegate;

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol>
{
    id <CKAlertControllerDelegate> _alertDelegate;
}

@property(nonatomic) __weak id <CKAlertControllerDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)wantsWindowedPresentation;
- (void)addAction:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)allowsRotation;

// Remaining properties
@property(readonly, nonatomic) NSArray *actions; // @dynamic actions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


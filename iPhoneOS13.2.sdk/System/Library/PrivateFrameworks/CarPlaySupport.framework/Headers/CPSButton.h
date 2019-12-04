//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <CarPlaySupport/CPSControl-Protocol.h>

@class NSString, NSUUID, UITapGestureRecognizer;
@protocol CPSButtonDelegate;

@interface CPSButton : UIButton <CPSControl>
{
    NSUUID *_identifier;
    id <CPSButtonDelegate> _delegate;
    UITapGestureRecognizer *_pressTapRecognizer;
    UITapGestureRecognizer *_touchTapRecognizer;
}

+ (id)buttonWithType:(long long)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *touchTapRecognizer; // @synthesize touchTapRecognizer=_touchTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *pressTapRecognizer; // @synthesize pressTapRecognizer=_pressTapRecognizer;
@property(nonatomic) __weak id <CPSButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_buttonSelected:(id)arg1 interactionModel:(unsigned long long)arg2;
- (void)_buttonTapped:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_addGestureRecognizers;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


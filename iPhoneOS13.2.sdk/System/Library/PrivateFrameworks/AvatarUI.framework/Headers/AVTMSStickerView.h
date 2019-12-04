//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Messages/MSStickerView.h>

#import <AvatarUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString;
@protocol AVTMSStickerViewDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTMSStickerView : MSStickerView <UIGestureRecognizerDelegate>
{
    _Bool _allowsPeel;
    id <AVTMSStickerViewDelegate> _delegate;
    id <AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
}

@property(nonatomic) __weak id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate; // @synthesize disclosureValidationDelegate=_disclosureValidationDelegate;
@property(nonatomic) __weak id <AVTMSStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsPeel; // @synthesize allowsPeel=_allowsPeel;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

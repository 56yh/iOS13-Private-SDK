//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <TSReading/TSDPlatformButtonProtocol-Protocol.h>

@class NSString;

@interface UIButton (TSDUIButton) <TSDPlatformButtonProtocol>
+ (id)tsdPlatformButtonWithFrame:(struct CGRect)arg1;
- (void)setAlternateImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBHClockApplicationIconImageView.h>

#import <SpringBoard/SBDateTimeOverrideObserver-Protocol.h>

@class NSString;

@interface SBClockApplicationIconImageView : SBHClockApplicationIconImageView <SBDateTimeOverrideObserver>
{
}

+ (void)initialize;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


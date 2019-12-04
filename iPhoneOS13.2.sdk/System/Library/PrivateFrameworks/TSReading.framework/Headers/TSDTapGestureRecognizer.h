//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@interface TSDTapGestureRecognizer : UITapGestureRecognizer
{
    struct CGPoint mFirstTapLocation;
    _Bool mSavedFirstTapLocation;
    unsigned long long mTapCount;
}

@property(readonly, nonatomic) unsigned long long tapCount; // @synthesize tapCount=mTapCount;
@property(readonly, nonatomic) struct CGPoint firstTapLocation; // @synthesize firstTapLocation=mFirstTapLocation;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

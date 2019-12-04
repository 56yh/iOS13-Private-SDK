//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartPieQuadrant : NSObject
{
    NSArray *mWedgeLayoutInfos;
    unsigned long long mHorizontalHalfDisk;
    unsigned long long mVerticalHalfDisk;
}

@property(readonly, nonatomic) unsigned long long verticalHalfDisk; // @synthesize verticalHalfDisk=mVerticalHalfDisk;
@property(readonly, nonatomic) unsigned long long horizontalHalfDisk; // @synthesize horizontalHalfDisk=mHorizontalHalfDisk;
@property(readonly, copy, nonatomic) NSArray *wedgeLayoutInfos; // @synthesize wedgeLayoutInfos=mWedgeLayoutInfos;
- (id)initWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(unsigned long long)arg2 verticalHalfDisk:(unsigned long long)arg3;

@end


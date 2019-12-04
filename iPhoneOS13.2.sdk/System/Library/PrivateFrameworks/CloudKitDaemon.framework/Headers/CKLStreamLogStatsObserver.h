//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver
{
    NSMutableDictionary *_totalSizeByLine;
    NSMutableDictionary *_totalCountByLine;
}

@property(retain) NSMutableDictionary *totalCountByLine; // @synthesize totalCountByLine=_totalCountByLine;
@property(retain) NSMutableDictionary *totalSizeByLine; // @synthesize totalSizeByLine=_totalSizeByLine;
- (void)finish;
- (void)eventMatched:(id)arg1;
- (id)initWithLogTypes:(unsigned long long)arg1;

@end


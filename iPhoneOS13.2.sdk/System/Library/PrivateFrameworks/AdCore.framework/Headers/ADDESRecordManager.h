//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADDESRecordManager : ADSingleton
{
    NSMutableDictionary *_desRecords;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *desRecords; // @synthesize desRecords=_desRecords;
- (id)recordForRequestID:(id)arg1;
- (void)addImpressionForRequestID:(id)arg1;
- (void)addTapForRequestID:(id)arg1;
- (void)updateAdData:(id)arg1 forRequestID:(id)arg2;
- (id)init;

@end


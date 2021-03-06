//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate
{
    id /* CDUnknownBlockType */ _namedEntityRecordsSetup;
    id /* CDUnknownBlockType */ _namedEntityRecordsHandler;
    id /* CDUnknownBlockType */ _namedEntityRecordsCompletion;
    id /* CDUnknownBlockType */ _recentNamedEntityRecordsSetup;
    id /* CDUnknownBlockType */ _recentNamedEntityRecordsHandler;
    id /* CDUnknownBlockType */ _recentNamedEntityRecordsCompletion;
    id /* CDUnknownBlockType */ _resetNamedEntityRecordData;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ resetNamedEntityRecordData; // @synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recentNamedEntityRecordsCompletion; // @synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recentNamedEntityRecordsHandler; // @synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recentNamedEntityRecordsSetup; // @synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup;
@property(copy, nonatomic) id /* CDUnknownBlockType */ namedEntityRecordsCompletion; // @synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ namedEntityRecordsHandler; // @synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ namedEntityRecordsSetup; // @synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup;
// - (void).cxx_destruct;
- (void)resetRecordData;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)arg1;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)arg1;
- (unsigned char)recordLoadingSetup;
- (id)description;
- (id)initWithName:(id)arg1;

@end


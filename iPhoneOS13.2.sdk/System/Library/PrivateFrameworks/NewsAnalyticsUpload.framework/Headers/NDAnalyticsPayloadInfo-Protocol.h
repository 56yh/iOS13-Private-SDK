//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDictionary, NSURL;

@protocol NDAnalyticsPayloadInfo <NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *droppedEntriesByReason;
@property(readonly, copy, nonatomic) NSArray *entriesToUpload;
@property(readonly, copy, nonatomic) NSDictionary *valuesByHTTPHeaderField;
@property(readonly, copy, nonatomic) NSURL *endpointURL;
@end


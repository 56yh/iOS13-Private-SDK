//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSString, PPNamedEntityQuery;

@protocol PPNamedEntityReadOnlyServerProtocol <PPFeedbackAccepting>
- (void)mapItemForPlaceName:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)namedEntityRecordsWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedNamedEntitiesWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;
@end


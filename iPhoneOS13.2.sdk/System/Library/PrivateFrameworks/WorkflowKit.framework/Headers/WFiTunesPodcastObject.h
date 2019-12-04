//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFiTunesCollectionObject.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing>
{
    NSString *_podcastUUID;
    NSURL *_feedURL;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSURL *feedURL; // @synthesize feedURL=_feedURL;
@property(copy, nonatomic) NSString *podcastUUID; // @synthesize podcastUUID=_podcastUUID;
- (id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 feedURL:(id)arg4 kind:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


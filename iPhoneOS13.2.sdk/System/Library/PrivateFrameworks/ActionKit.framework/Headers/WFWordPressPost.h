//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface WFWordPressPost : MTLModel <MTLJSONSerializing>
{
    NSNumber *_postId;
    NSURL *_link;
}

+ (id)linkJSONTransformer;
+ (id)postIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSURL *link; // @synthesize link=_link;
@property(readonly, copy, nonatomic) NSNumber *postId; // @synthesize postId=_postId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFSerializableContent-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface WFGiphyObject : MTLModel <WFNaming, WFSerializableContent, MTLJSONSerializing>
{
    NSString *_objectId;
    NSString *_type;
    NSString *_caption;
    NSURL *_url;
    NSDictionary *_images;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)captionJSONTransformer;
+ (id)imagesJSONTransformer;
+ (id)urlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSDictionary *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)smallestImage;
- (id)originalImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


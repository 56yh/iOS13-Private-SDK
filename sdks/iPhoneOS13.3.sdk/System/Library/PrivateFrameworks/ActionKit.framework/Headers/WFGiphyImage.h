//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSURL, WFImage;

@interface WFGiphyImage : MTLModel <MTLJSONSerializing>
{
    NSURL *_url;
    NSURL *_videoURL;
    NSUInteger _fileSize;
    NSUInteger _width;
    NSUInteger _height;
    WFImage *_cachedImage;
}

+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) WFImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(readonly, nonatomic) NSUInteger height; // @synthesize height=_height;
@property(readonly, nonatomic) NSUInteger width; // @synthesize width=_width;
@property(readonly, nonatomic) NSUInteger fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;

@end


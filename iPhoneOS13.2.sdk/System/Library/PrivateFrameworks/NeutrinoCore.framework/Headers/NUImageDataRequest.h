//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUImageRenderRequest.h>

@class NSDictionary, NSString;

@interface NUImageDataRequest : NUImageRenderRequest
{
    NSString *_dataExtractor;
    NSDictionary *_options;
}

@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSString *dataExtractor; // @synthesize dataExtractor=_dataExtractor;
- (void)submit:(id /* block */)arg1;
- (id)newRenderJob;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)initWithComposition:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end


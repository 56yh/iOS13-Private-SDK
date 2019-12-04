//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SXImageRequest : NSObject
{
    _Bool _preserveColorspace;
    NSString *_imageIdentifier;
    NSURL *_URL;
    unsigned long long _qualities;
    id /* block */ _loadingBlock;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool preserveColorspace; // @synthesize preserveColorspace=_preserveColorspace;
@property(copy, nonatomic) id /* block */ loadingBlock; // @synthesize loadingBlock=_loadingBlock;
@property(readonly, nonatomic) unsigned long long qualities; // @synthesize qualities=_qualities;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (id)initWithImageIdentifier:(id)arg1 imageQualities:(unsigned long long)arg2 url:(id)arg3 size:(struct CGSize)arg4 preserveColorspace:(_Bool)arg5 loadingBlock:(id /* block */)arg6;

@end


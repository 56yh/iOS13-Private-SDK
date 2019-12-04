//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ResourceLoader;

@interface DEDImageResourceManager : NSObject
{
    ResourceLoader *_loader;
    NSMutableDictionary *_imageCache;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(retain) ResourceLoader *loader; // @synthesize loader=_loader;
- (id)cachedImageFromKey:(id)arg1;
- (void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(id /* block */)arg3;

@end


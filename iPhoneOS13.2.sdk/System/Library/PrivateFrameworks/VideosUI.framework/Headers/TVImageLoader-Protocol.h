//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, NSURL;
@protocol IKNetworkRequestLoader;

@protocol TVImageLoader 
- (void)cancelLoad:(id)arg1;
- (NSString *)imageKeyForObject:(id)arg1;

@optional
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id <IKNetworkRequestLoader>)arg5 completionHandler:(void (^)(TVImage *, NSString *, NSDate *, unsigned long long, NSError *))arg6;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 completionHandler:(void (^)(TVImage *, NSString *, NSDate *, unsigned long long, NSError *))arg5;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(void (^)(TVImage *, NSString *, NSDate *, unsigned long long, NSError *))arg4;
- (_Bool)hasImageCache;
- (NSURL *)URLForObject:(id)arg1;
@end


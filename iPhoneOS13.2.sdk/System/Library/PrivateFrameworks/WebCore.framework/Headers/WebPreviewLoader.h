//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebPreviewLoader : NSObject
{
    struct WeakPtr<WebCore::ResourceLoader> _resourceLoader;
    struct ResourceResponse _response;
    struct RefPtr<WebCore::PreviewLoaderClient, WTF::DumbPtrTraits<WebCore::PreviewLoaderClient>> _client;
    struct unique_ptr<WebCore::PreviewConverter, std::__1::default_delete<WebCore::PreviewConverter>> _converter;
    struct RetainPtr<NSMutableArray> _bufferedDataArray;
    _Bool _hasLoadedPreview;
    _Bool _hasProcessedResponse;
    struct RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer>> _bufferedData;
    long long _lengthReceived;
    _Bool _needsToCallDidFinishLoading;
    _Bool _shouldDecidePolicyBeforeLoading;
}

@property(readonly, nonatomic) _Bool shouldDecidePolicyBeforeLoading; // @synthesize shouldDecidePolicyBeforeLoading=_shouldDecidePolicyBeforeLoading;
- (id).cxx_construct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)_loadPreviewIfNeeded;
- (void)failed;
- (void)finishedAppending;
- (void)appendDataArray:(id)arg1;
- (id)initWithResourceLoader:(struct ResourceLoader *)arg1 resourceResponse:(const struct ResourceResponse *)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, SKUIClientContext, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    UIImage *_photo;
}

- (id)_requestWithError:(id *)arg1;
- (id)_photoUploadWithResponseDictionary:(id)arg1;
- (void)main;
- (void)setPhoto:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (id /* block */)outputBlock;
- (id)initWithClientContext:(id)arg1;

@end


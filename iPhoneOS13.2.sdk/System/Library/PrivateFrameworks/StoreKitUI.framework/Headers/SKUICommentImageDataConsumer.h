//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

__attribute__((visibility("hidden")))
@interface SKUICommentImageDataConsumer : SKUIStyledImageDataConsumer
{
    id /* block */ _completionBlock;
}

@property(copy) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
- (id)_scaledImageWithBounds:(struct CGSize)arg1 contentRect:(struct CGRect)arg2 drawBlock:(id /* block */)arg3;
- (id)imageForImage:(id)arg1;

@end


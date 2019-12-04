//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKUIColorScheme, SKUIProductImageDataConsumer, SKUIStyledImageDataConsumer, UIColor;

@interface SKUIItemArtworkContext : NSObject
{
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    SKUIProductImageDataConsumer *_generalImageConsumer;
    SKUIStyledImageDataConsumer *_iconConsumer;
    SKUIProductImageDataConsumer *_letterboxConsumer;
    SKUIStyledImageDataConsumer *_newsstandConsumer;
    NSMutableDictionary *_placeholders;
    SKUIProductImageDataConsumer *_posterConsumer;
    SKUIStyledImageDataConsumer *_messagesIconConsumer;
}

+ (id)wishlistContext;
+ (id)roomContext;
+ (id)lockupContextWithSize:(long long)arg1;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *messagesIconConsumer; // @synthesize messagesIconConsumer=_messagesIconConsumer;
@property(retain, nonatomic) SKUIProductImageDataConsumer *posterConsumer; // @synthesize posterConsumer=_posterConsumer;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *newsstandConsumer; // @synthesize newsstandConsumer=_newsstandConsumer;
@property(retain, nonatomic) SKUIProductImageDataConsumer *letterboxConsumer; // @synthesize letterboxConsumer=_letterboxConsumer;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconConsumer; // @synthesize iconConsumer=_iconConsumer;
@property(retain, nonatomic) SKUIProductImageDataConsumer *generalConsumer; // @synthesize generalConsumer=_generalImageConsumer;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)artworkForItem:(id)arg1;
- (id)URLForItem:(id)arg1;
- (id)placeholderImageForItem:(id)arg1;
- (struct CGSize)largestImageSizeForLockups:(id)arg1;
- (struct CGSize)largestImageSizeForItems:(id)arg1;
- (struct CGSize)imageSizeForItem:(id)arg1;
- (id)dataConsumerForItem:(id)arg1;

@end


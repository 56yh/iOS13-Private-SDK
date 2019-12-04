//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/_MRContentItemProtobuf.h>

@class MRContentItemMetadata;

__attribute__((visibility("hidden")))
@interface MRContentItem : _MRContentItemProtobuf
{
}

+ (void)initialize;
- (id)customDictionaryRepresentation;
@property(readonly, nonatomic) _Bool hasAvailableLanguageOptions;
@property(readonly, nonatomic) _Bool hasCurrentLanguageOptions;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setArtworkData:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLyrics:(id)arg1;
@property(readonly, nonatomic) MRContentItemMetadata *itemMetadata;
- (id)initWithData:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject
{
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
- (id)_suggestionEntryMetadata;
@property(readonly, nonatomic) NSString *searchBarDisplayToken;
@property(readonly, nonatomic) NSString *displayString;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;

@end


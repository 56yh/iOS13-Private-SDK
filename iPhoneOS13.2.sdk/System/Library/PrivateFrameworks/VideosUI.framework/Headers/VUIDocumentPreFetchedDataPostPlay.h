//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIDocumentPreFetchedData.h>

@class NSArray, NSString;

@interface VUIDocumentPreFetchedDataPostPlay : VUIDocumentPreFetchedData
{
    _Bool _updateEvent;
    _Bool _canAutoPlay;
    NSString *_host;
    NSString *_productID;
    NSString *_showID;
    NSArray *_excludedCanonicals;
}

@property(nonatomic) _Bool canAutoPlay; // @synthesize canAutoPlay=_canAutoPlay;
@property(nonatomic) _Bool updateEvent; // @synthesize updateEvent=_updateEvent;
@property(copy, nonatomic) NSArray *excludedCanonicals; // @synthesize excludedCanonicals=_excludedCanonicals;
@property(copy, nonatomic) NSString *showID; // @synthesize showID=_showID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)jsonData;

@end


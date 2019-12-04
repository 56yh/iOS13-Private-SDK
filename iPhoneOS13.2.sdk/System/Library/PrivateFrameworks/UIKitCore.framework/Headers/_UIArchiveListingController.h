//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _UILibArchiveStreamingReader;

@interface _UIArchiveListingController : NSObject
{
    _UILibArchiveStreamingReader *_archiveReader;
    _Bool _isValidArchive;
    _Bool _excludeDotFilesFromResults;
    NSString *_archivePath;
    long long _appleDoubleIdentificationType;
}

@property(nonatomic) _Bool excludeDotFilesFromResults; // @synthesize excludeDotFilesFromResults=_excludeDotFilesFromResults;
@property(nonatomic) long long appleDoubleIdentificationType; // @synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType;
@property(readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (_Bool)_shouldVisitItem:(id)arg1;
- (_Bool)enumerateLogicalItemsWithBlock:(id /* block */)arg1 error:(id *)arg2;
- (_Bool)determineIsReadableArchive;
- (void)dealloc;
- (id)initWithArchivePath:(id)arg1;

@end


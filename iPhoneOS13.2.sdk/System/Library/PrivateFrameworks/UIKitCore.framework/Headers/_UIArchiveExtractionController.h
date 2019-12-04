//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _UIArchiveExtractionController : NSObject
{
    NSArray *_extractedContentAbsolutePaths;
    NSString *_sourceArchivePath;
    NSString *_destinationExtractionRootPath;
    NSString *_destinationContentProtectionType;
    NSString *_sourceArchiveExtractionRootPath;
}

@property(retain, nonatomic) NSString *sourceArchiveExtractionRootPath; // @synthesize sourceArchiveExtractionRootPath=_sourceArchiveExtractionRootPath;
@property(retain, nonatomic) NSString *destinationContentProtectionType; // @synthesize destinationContentProtectionType=_destinationContentProtectionType;
@property(retain, nonatomic) NSString *destinationExtractionRootPath; // @synthesize destinationExtractionRootPath=_destinationExtractionRootPath;
@property(readonly, nonatomic) NSString *sourceArchivePath; // @synthesize sourceArchivePath=_sourceArchivePath;
- (_Bool)_createDestinationRoot:(id *)arg1;
- (id)extractedContentAbsolutePathsMatchingPredicate:(id /* block */)arg1;
- (_Bool)extractArchiveContent:(id *)arg1;
- (id)initWithSourceArchivePath:(id)arg1 destinationExtractionRootPath:(id)arg2;

@end


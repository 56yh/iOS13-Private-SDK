//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIMediaItemEntityTypesFetchResponse, VUIPlistMediaDatabase;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation
{
    VUIMediaItemEntityTypesFetchResponse *_response;
    NSError *_error;
    VUIPlistMediaDatabase *_database;
}

@property(retain, nonatomic) VUIPlistMediaDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // @synthesize response=_response;
- (void)executionDidBegin;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGBloomFilterChunk-Protocol.h>

@class NSString;

@interface SGBloomFilterChunkMmap : NSObject <SGBloomFilterChunk>
{
    NSString *_path;
    int _fd;
    unsigned int *_countPtr;
    unsigned int _mask;
    char *_buf;
}

- (_Bool)exists:(CDUnion_e7c9147b)arg1;
- (void)add:(CDUnion_e7c9147b)arg1;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) unsigned int count;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end


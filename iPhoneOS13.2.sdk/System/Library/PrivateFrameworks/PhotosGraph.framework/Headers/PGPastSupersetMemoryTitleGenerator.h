//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSDateInterval, PGGraphLocationNode;

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator
{
    PGGraphLocationNode *_supersetLocationNode;
    NSDateInterval *_supersetDateInterval;
}

@property(readonly) NSDateInterval *supersetDateInterval; // @synthesize supersetDateInterval=_supersetDateInterval;
@property(readonly) PGGraphLocationNode *supersetLocationNode; // @synthesize supersetLocationNode=_supersetLocationNode;
- (id)_timeTitle;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3;

@end


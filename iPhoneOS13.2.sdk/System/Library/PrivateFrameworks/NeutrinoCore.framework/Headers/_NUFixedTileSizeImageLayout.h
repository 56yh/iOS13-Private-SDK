//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUImageLayout.h>

@interface _NUFixedTileSizeImageLayout : NUImageLayout
{
    CDStruct_d58201db _tileSize;
    CDStruct_d58201db _borderSize;
    CDStruct_d58201db _tileCounts;
}

- (_Bool)isEqualToLayout:(id)arg1;
- (CDStruct_912cb5d2)tileCounts;
- (CDStruct_912cb5d2)borderSize;
- (CDStruct_912cb5d2)tileSize;
- (id)tileInfoAtIndex:(long long)arg1;
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;
- (long long)tileCount;
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2 borderSize:(CDStruct_912cb5d2)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface SBFColorBoxes : NSObject <NSSecureCoding>
{
    struct CGSize _imageSize;
    unsigned char _totalContrast8;
    unsigned long long _downsampledBoxSize;
    unsigned long long _effectiveDownsampleFactor;
    unsigned long long _pixelHeight;
    unsigned long long _pixelWidth;
    CDStruct_a06f635e *_colorBoxesRowMajor;
    unsigned long long _rowCount;
    unsigned long long _columnCount;
    unsigned long long _size;
}

+ (id)colorBoxesForImage:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property(readonly, nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(readonly, nonatomic) CDStruct_a06f635e *colorBoxesRowMajor; // @synthesize colorBoxesRowMajor=_colorBoxesRowMajor;
@property(readonly, nonatomic) unsigned char totalContrast8; // @synthesize totalContrast8=_totalContrast8;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long effectiveDownsampleFactor; // @synthesize effectiveDownsampleFactor=_effectiveDownsampleFactor;
@property(readonly, nonatomic) unsigned long long downsampledBoxSize; // @synthesize downsampledBoxSize=_downsampledBoxSize;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorBoxes:(CDStruct_a06f635e *)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 totalContrast8:(unsigned char)arg5 imageSize:(struct CGSize)arg6 downsampledBoxSize:(unsigned long long)arg7 effectiveDownsampleFactor:(unsigned long long)arg8 pixelHeight:(unsigned long long)arg9 pixelWidth:(unsigned long long)arg10;
- (CDStruct_a06f635e *)colorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2;
- (struct CGRect)rectForColorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2;
- (double)contrast;

@end


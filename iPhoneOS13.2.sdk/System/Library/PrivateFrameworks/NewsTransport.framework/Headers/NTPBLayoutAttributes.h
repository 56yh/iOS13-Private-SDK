//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSString;

@interface NTPBLayoutAttributes : PBCodable <NSCopying>
{
    long long _accessoryContentMode;
    long long _borderSpecification;
    long long _columnSpan;
    long long _imagePosition;
    long long _numberOfSegments;
    long long _publisherLogoContentMode;
    long long _rowSpan;
    long long _segmentViewDirection;
    long long _titleNextToImageRangeLength;
    long long _titleNextToImageRangeLocation;
    long long _titleTextAlignment;
    float _accessoryBottomPadding;
    NSData *_accessoryFontColor;
    float _accessoryFontLineHeight;
    NSString *_accessoryFontName;
    float _accessoryFontSize;
    NSData *_accessoryIconColor;
    float _accessoryLeftPadding;
    float _accessoryRightPadding;
    float _accessoryTopPadding;
    float _accessoryViewHeight;
    float _accessoryViewWidth;
    float _accessoryViewX;
    float _accessoryViewY;
    NSData *_backgroundColor;
    float _backgroundColorInsetBottom;
    float _backgroundColorInsetLeft;
    float _backgroundColorInsetRight;
    float _backgroundColorInsetTop;
    int _cellType;
    float _contentInsetBottom;
    float _contentInsetLeft;
    float _contentInsetRight;
    float _contentInsetTop;
    NSString *_decorationKind;
    NSData *_excerptColor;
    float _excerptFontLineHeight;
    NSString *_excerptFontName;
    float _excerptFontSize;
    float _excerptFrameHeight;
    float _excerptFrameWidth;
    float _excerptFrameX;
    float _excerptFrameY;
    float _frameHeight;
    float _frameWidth;
    float _frameX;
    float _frameY;
    float _imageViewFrameHeight;
    float _imageViewFrameWidth;
    float _imageViewFrameX;
    float _imageViewFrameY;
    float _logoImageFrameHeight;
    float _logoImageFrameWidth;
    float _logoImageFrameX;
    float _logoImageFrameY;
    NSData *_numberedCircleColor;
    float _numberedCircleFrameHeight;
    float _numberedCircleFrameWidth;
    float _numberedCircleFrameX;
    float _numberedCircleFrameY;
    NSData *_publisherLogoColor;
    float _segmentViewFrameHeight;
    float _segmentViewFrameWidth;
    float _segmentViewFrameX;
    float _segmentViewFrameY;
    float _selectionCornerRadius;
    float _selectionInsetBottom;
    float _selectionInsetLeft;
    float _selectionInsetRight;
    float _selectionInsetTop;
    float _shadowOffsetX;
    float _shadowOffsetY;
    float _shadowOpacity;
    float _shadowRadius;
    float _sharrowFrameHeight;
    float _sharrowFrameWidth;
    float _sharrowFrameX;
    float _sharrowFrameY;
    float _subtitleFrameHeight;
    float _subtitleFrameWidth;
    float _subtitleFrameX;
    float _subtitleFrameY;
    NSData *_titleColor;
    float _titleFontLineHeight;
    NSString *_titleFontName;
    float _titleFontSize;
    float _titleFrameHeight;
    float _titleFrameWidth;
    float _titleFrameX;
    float _titleFrameY;
    _Bool _hasVideo;
    _Bool _isAccessoryViewCompactWidth;
    _Bool _showingAccessoryText;
    struct {
        unsigned int accessoryContentMode:1;
        unsigned int borderSpecification:1;
        unsigned int columnSpan:1;
        unsigned int imagePosition:1;
        unsigned int numberOfSegments:1;
        unsigned int publisherLogoContentMode:1;
        unsigned int rowSpan:1;
        unsigned int segmentViewDirection:1;
        unsigned int titleNextToImageRangeLength:1;
        unsigned int titleNextToImageRangeLocation:1;
        unsigned int titleTextAlignment:1;
        unsigned int accessoryBottomPadding:1;
        unsigned int accessoryFontLineHeight:1;
        unsigned int accessoryFontSize:1;
        unsigned int accessoryLeftPadding:1;
        unsigned int accessoryRightPadding:1;
        unsigned int accessoryTopPadding:1;
        unsigned int accessoryViewHeight:1;
        unsigned int accessoryViewWidth:1;
        unsigned int accessoryViewX:1;
        unsigned int accessoryViewY:1;
        unsigned int backgroundColorInsetBottom:1;
        unsigned int backgroundColorInsetLeft:1;
        unsigned int backgroundColorInsetRight:1;
        unsigned int backgroundColorInsetTop:1;
        unsigned int cellType:1;
        unsigned int contentInsetBottom:1;
        unsigned int contentInsetLeft:1;
        unsigned int contentInsetRight:1;
        unsigned int contentInsetTop:1;
        unsigned int excerptFontLineHeight:1;
        unsigned int excerptFontSize:1;
        unsigned int excerptFrameHeight:1;
        unsigned int excerptFrameWidth:1;
        unsigned int excerptFrameX:1;
        unsigned int excerptFrameY:1;
        unsigned int imageViewFrameHeight:1;
        unsigned int imageViewFrameWidth:1;
        unsigned int imageViewFrameX:1;
        unsigned int imageViewFrameY:1;
        unsigned int logoImageFrameHeight:1;
        unsigned int logoImageFrameWidth:1;
        unsigned int logoImageFrameX:1;
        unsigned int logoImageFrameY:1;
        unsigned int numberedCircleFrameHeight:1;
        unsigned int numberedCircleFrameWidth:1;
        unsigned int numberedCircleFrameX:1;
        unsigned int numberedCircleFrameY:1;
        unsigned int segmentViewFrameHeight:1;
        unsigned int segmentViewFrameWidth:1;
        unsigned int segmentViewFrameX:1;
        unsigned int segmentViewFrameY:1;
        unsigned int selectionCornerRadius:1;
        unsigned int selectionInsetBottom:1;
        unsigned int selectionInsetLeft:1;
        unsigned int selectionInsetRight:1;
        unsigned int selectionInsetTop:1;
        unsigned int shadowOffsetX:1;
        unsigned int shadowOffsetY:1;
        unsigned int shadowOpacity:1;
        unsigned int shadowRadius:1;
        unsigned int sharrowFrameHeight:1;
        unsigned int sharrowFrameWidth:1;
        unsigned int sharrowFrameX:1;
        unsigned int sharrowFrameY:1;
        unsigned int subtitleFrameHeight:1;
        unsigned int subtitleFrameWidth:1;
        unsigned int subtitleFrameX:1;
        unsigned int subtitleFrameY:1;
        unsigned int titleFontLineHeight:1;
        unsigned int titleFontSize:1;
        unsigned int titleFrameHeight:1;
        unsigned int titleFrameWidth:1;
        unsigned int titleFrameX:1;
        unsigned int titleFrameY:1;
        unsigned int hasVideo:1;
        unsigned int isAccessoryViewCompactWidth:1;
        unsigned int showingAccessoryText:1;
    } _has;
}

@property(nonatomic) float accessoryRightPadding; // @synthesize accessoryRightPadding=_accessoryRightPadding;
@property(nonatomic) float accessoryLeftPadding; // @synthesize accessoryLeftPadding=_accessoryLeftPadding;
@property(nonatomic) float accessoryTopPadding; // @synthesize accessoryTopPadding=_accessoryTopPadding;
@property(nonatomic) float accessoryBottomPadding; // @synthesize accessoryBottomPadding=_accessoryBottomPadding;
@property(nonatomic) long long segmentViewDirection; // @synthesize segmentViewDirection=_segmentViewDirection;
@property(nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(nonatomic) float segmentViewFrameHeight; // @synthesize segmentViewFrameHeight=_segmentViewFrameHeight;
@property(nonatomic) float segmentViewFrameWidth; // @synthesize segmentViewFrameWidth=_segmentViewFrameWidth;
@property(nonatomic) float segmentViewFrameY; // @synthesize segmentViewFrameY=_segmentViewFrameY;
@property(nonatomic) float segmentViewFrameX; // @synthesize segmentViewFrameX=_segmentViewFrameX;
@property(nonatomic) float shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) float shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) float shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) long long titleNextToImageRangeLength; // @synthesize titleNextToImageRangeLength=_titleNextToImageRangeLength;
@property(nonatomic) long long titleNextToImageRangeLocation; // @synthesize titleNextToImageRangeLocation=_titleNextToImageRangeLocation;
@property(nonatomic) long long publisherLogoContentMode; // @synthesize publisherLogoContentMode=_publisherLogoContentMode;
@property(nonatomic) float selectionCornerRadius; // @synthesize selectionCornerRadius=_selectionCornerRadius;
@property(nonatomic) float selectionInsetRight; // @synthesize selectionInsetRight=_selectionInsetRight;
@property(nonatomic) float selectionInsetBottom; // @synthesize selectionInsetBottom=_selectionInsetBottom;
@property(nonatomic) float selectionInsetLeft; // @synthesize selectionInsetLeft=_selectionInsetLeft;
@property(nonatomic) float selectionInsetTop; // @synthesize selectionInsetTop=_selectionInsetTop;
@property(nonatomic) float sharrowFrameHeight; // @synthesize sharrowFrameHeight=_sharrowFrameHeight;
@property(nonatomic) float sharrowFrameWidth; // @synthesize sharrowFrameWidth=_sharrowFrameWidth;
@property(nonatomic) float sharrowFrameY; // @synthesize sharrowFrameY=_sharrowFrameY;
@property(nonatomic) float sharrowFrameX; // @synthesize sharrowFrameX=_sharrowFrameX;
@property(retain, nonatomic) NSData *numberedCircleColor; // @synthesize numberedCircleColor=_numberedCircleColor;
@property(nonatomic) float numberedCircleFrameHeight; // @synthesize numberedCircleFrameHeight=_numberedCircleFrameHeight;
@property(nonatomic) float numberedCircleFrameWidth; // @synthesize numberedCircleFrameWidth=_numberedCircleFrameWidth;
@property(nonatomic) float numberedCircleFrameY; // @synthesize numberedCircleFrameY=_numberedCircleFrameY;
@property(nonatomic) float numberedCircleFrameX; // @synthesize numberedCircleFrameX=_numberedCircleFrameX;
@property(retain, nonatomic) NSData *accessoryIconColor; // @synthesize accessoryIconColor=_accessoryIconColor;
@property(retain, nonatomic) NSData *publisherLogoColor; // @synthesize publisherLogoColor=_publisherLogoColor;
@property(nonatomic) _Bool isAccessoryViewCompactWidth; // @synthesize isAccessoryViewCompactWidth=_isAccessoryViewCompactWidth;
@property(nonatomic) _Bool showingAccessoryText; // @synthesize showingAccessoryText=_showingAccessoryText;
@property(nonatomic) long long accessoryContentMode; // @synthesize accessoryContentMode=_accessoryContentMode;
@property(retain, nonatomic) NSString *accessoryFontName; // @synthesize accessoryFontName=_accessoryFontName;
@property(retain, nonatomic) NSData *accessoryFontColor; // @synthesize accessoryFontColor=_accessoryFontColor;
@property(nonatomic) float accessoryFontLineHeight; // @synthesize accessoryFontLineHeight=_accessoryFontLineHeight;
@property(nonatomic) float accessoryFontSize; // @synthesize accessoryFontSize=_accessoryFontSize;
@property(nonatomic) long long titleTextAlignment; // @synthesize titleTextAlignment=_titleTextAlignment;
@property(retain, nonatomic) NSData *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSData *excerptColor; // @synthesize excerptColor=_excerptColor;
@property(retain, nonatomic) NSData *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) float excerptFontLineHeight; // @synthesize excerptFontLineHeight=_excerptFontLineHeight;
@property(nonatomic) float titleFontLineHeight; // @synthesize titleFontLineHeight=_titleFontLineHeight;
@property(nonatomic) float excerptFontSize; // @synthesize excerptFontSize=_excerptFontSize;
@property(nonatomic) float titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) NSString *excerptFontName; // @synthesize excerptFontName=_excerptFontName;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(nonatomic) int cellType; // @synthesize cellType=_cellType;
@property(nonatomic) float backgroundColorInsetRight; // @synthesize backgroundColorInsetRight=_backgroundColorInsetRight;
@property(nonatomic) float backgroundColorInsetBottom; // @synthesize backgroundColorInsetBottom=_backgroundColorInsetBottom;
@property(nonatomic) float backgroundColorInsetLeft; // @synthesize backgroundColorInsetLeft=_backgroundColorInsetLeft;
@property(nonatomic) float backgroundColorInsetTop; // @synthesize backgroundColorInsetTop=_backgroundColorInsetTop;
@property(nonatomic) float accessoryViewHeight; // @synthesize accessoryViewHeight=_accessoryViewHeight;
@property(nonatomic) float accessoryViewY; // @synthesize accessoryViewY=_accessoryViewY;
@property(nonatomic) float accessoryViewWidth; // @synthesize accessoryViewWidth=_accessoryViewWidth;
@property(nonatomic) float accessoryViewX; // @synthesize accessoryViewX=_accessoryViewX;
@property(nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) float contentInsetRight; // @synthesize contentInsetRight=_contentInsetRight;
@property(nonatomic) float contentInsetBottom; // @synthesize contentInsetBottom=_contentInsetBottom;
@property(nonatomic) float contentInsetLeft; // @synthesize contentInsetLeft=_contentInsetLeft;
@property(nonatomic) float contentInsetTop; // @synthesize contentInsetTop=_contentInsetTop;
@property(nonatomic) float subtitleFrameHeight; // @synthesize subtitleFrameHeight=_subtitleFrameHeight;
@property(nonatomic) float subtitleFrameWidth; // @synthesize subtitleFrameWidth=_subtitleFrameWidth;
@property(nonatomic) float subtitleFrameY; // @synthesize subtitleFrameY=_subtitleFrameY;
@property(nonatomic) float subtitleFrameX; // @synthesize subtitleFrameX=_subtitleFrameX;
@property(nonatomic) long long borderSpecification; // @synthesize borderSpecification=_borderSpecification;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain, nonatomic) NSString *decorationKind; // @synthesize decorationKind=_decorationKind;
@property(nonatomic) float excerptFrameHeight; // @synthesize excerptFrameHeight=_excerptFrameHeight;
@property(nonatomic) float excerptFrameWidth; // @synthesize excerptFrameWidth=_excerptFrameWidth;
@property(nonatomic) float excerptFrameY; // @synthesize excerptFrameY=_excerptFrameY;
@property(nonatomic) float excerptFrameX; // @synthesize excerptFrameX=_excerptFrameX;
@property(nonatomic) float logoImageFrameHeight; // @synthesize logoImageFrameHeight=_logoImageFrameHeight;
@property(nonatomic) float logoImageFrameWidth; // @synthesize logoImageFrameWidth=_logoImageFrameWidth;
@property(nonatomic) float logoImageFrameY; // @synthesize logoImageFrameY=_logoImageFrameY;
@property(nonatomic) float logoImageFrameX; // @synthesize logoImageFrameX=_logoImageFrameX;
@property(nonatomic) float titleFrameHeight; // @synthesize titleFrameHeight=_titleFrameHeight;
@property(nonatomic) float titleFrameWidth; // @synthesize titleFrameWidth=_titleFrameWidth;
@property(nonatomic) float titleFrameY; // @synthesize titleFrameY=_titleFrameY;
@property(nonatomic) float titleFrameX; // @synthesize titleFrameX=_titleFrameX;
@property(nonatomic) float imageViewFrameHeight; // @synthesize imageViewFrameHeight=_imageViewFrameHeight;
@property(nonatomic) float imageViewFrameWidth; // @synthesize imageViewFrameWidth=_imageViewFrameWidth;
@property(nonatomic) float imageViewFrameY; // @synthesize imageViewFrameY=_imageViewFrameY;
@property(nonatomic) float imageViewFrameX; // @synthesize imageViewFrameX=_imageViewFrameX;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) long long columnSpan; // @synthesize columnSpan=_columnSpan;
@property(nonatomic) float frameHeight; // @synthesize frameHeight=_frameHeight;
@property(nonatomic) float frameWidth; // @synthesize frameWidth=_frameWidth;
@property(nonatomic) float frameY; // @synthesize frameY=_frameY;
@property(nonatomic) float frameX; // @synthesize frameX=_frameX;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAccessoryRightPadding;
@property(nonatomic) _Bool hasAccessoryLeftPadding;
@property(nonatomic) _Bool hasAccessoryTopPadding;
@property(nonatomic) _Bool hasAccessoryBottomPadding;
@property(nonatomic) _Bool hasSegmentViewDirection;
@property(nonatomic) _Bool hasNumberOfSegments;
@property(nonatomic) _Bool hasSegmentViewFrameHeight;
@property(nonatomic) _Bool hasSegmentViewFrameWidth;
@property(nonatomic) _Bool hasSegmentViewFrameY;
@property(nonatomic) _Bool hasSegmentViewFrameX;
@property(nonatomic) _Bool hasShadowOffsetY;
@property(nonatomic) _Bool hasShadowOffsetX;
@property(nonatomic) _Bool hasShadowOpacity;
@property(nonatomic) _Bool hasShadowRadius;
@property(nonatomic) _Bool hasTitleNextToImageRangeLength;
@property(nonatomic) _Bool hasTitleNextToImageRangeLocation;
@property(nonatomic) _Bool hasPublisherLogoContentMode;
@property(nonatomic) _Bool hasSelectionCornerRadius;
@property(nonatomic) _Bool hasSelectionInsetRight;
@property(nonatomic) _Bool hasSelectionInsetBottom;
@property(nonatomic) _Bool hasSelectionInsetLeft;
@property(nonatomic) _Bool hasSelectionInsetTop;
@property(nonatomic) _Bool hasSharrowFrameHeight;
@property(nonatomic) _Bool hasSharrowFrameWidth;
@property(nonatomic) _Bool hasSharrowFrameY;
@property(nonatomic) _Bool hasSharrowFrameX;
@property(readonly, nonatomic) _Bool hasNumberedCircleColor;
@property(nonatomic) _Bool hasNumberedCircleFrameHeight;
@property(nonatomic) _Bool hasNumberedCircleFrameWidth;
@property(nonatomic) _Bool hasNumberedCircleFrameY;
@property(nonatomic) _Bool hasNumberedCircleFrameX;
@property(readonly, nonatomic) _Bool hasAccessoryIconColor;
@property(readonly, nonatomic) _Bool hasPublisherLogoColor;
@property(nonatomic) _Bool hasIsAccessoryViewCompactWidth;
@property(nonatomic) _Bool hasShowingAccessoryText;
@property(nonatomic) _Bool hasAccessoryContentMode;
@property(readonly, nonatomic) _Bool hasAccessoryFontName;
@property(readonly, nonatomic) _Bool hasAccessoryFontColor;
@property(nonatomic) _Bool hasAccessoryFontLineHeight;
@property(nonatomic) _Bool hasAccessoryFontSize;
@property(nonatomic) _Bool hasTitleTextAlignment;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(readonly, nonatomic) _Bool hasExcerptColor;
@property(readonly, nonatomic) _Bool hasTitleColor;
@property(nonatomic) _Bool hasExcerptFontLineHeight;
@property(nonatomic) _Bool hasTitleFontLineHeight;
@property(nonatomic) _Bool hasExcerptFontSize;
@property(nonatomic) _Bool hasTitleFontSize;
@property(readonly, nonatomic) _Bool hasExcerptFontName;
@property(readonly, nonatomic) _Bool hasTitleFontName;
@property(nonatomic) _Bool hasCellType;
@property(nonatomic) _Bool hasBackgroundColorInsetRight;
@property(nonatomic) _Bool hasBackgroundColorInsetBottom;
@property(nonatomic) _Bool hasBackgroundColorInsetLeft;
@property(nonatomic) _Bool hasBackgroundColorInsetTop;
@property(nonatomic) _Bool hasAccessoryViewHeight;
@property(nonatomic) _Bool hasAccessoryViewY;
@property(nonatomic) _Bool hasAccessoryViewWidth;
@property(nonatomic) _Bool hasAccessoryViewX;
@property(nonatomic) _Bool hasRowSpan;
@property(nonatomic) _Bool hasContentInsetRight;
@property(nonatomic) _Bool hasContentInsetBottom;
@property(nonatomic) _Bool hasContentInsetLeft;
@property(nonatomic) _Bool hasContentInsetTop;
@property(nonatomic) _Bool hasSubtitleFrameHeight;
@property(nonatomic) _Bool hasSubtitleFrameWidth;
@property(nonatomic) _Bool hasSubtitleFrameY;
@property(nonatomic) _Bool hasSubtitleFrameX;
@property(nonatomic) _Bool hasBorderSpecification;
@property(nonatomic) _Bool hasHasVideo;
@property(readonly, nonatomic) _Bool hasDecorationKind;
@property(nonatomic) _Bool hasExcerptFrameHeight;
@property(nonatomic) _Bool hasExcerptFrameWidth;
@property(nonatomic) _Bool hasExcerptFrameY;
@property(nonatomic) _Bool hasExcerptFrameX;
@property(nonatomic) _Bool hasLogoImageFrameHeight;
@property(nonatomic) _Bool hasLogoImageFrameWidth;
@property(nonatomic) _Bool hasLogoImageFrameY;
@property(nonatomic) _Bool hasLogoImageFrameX;
@property(nonatomic) _Bool hasTitleFrameHeight;
@property(nonatomic) _Bool hasTitleFrameWidth;
@property(nonatomic) _Bool hasTitleFrameY;
@property(nonatomic) _Bool hasTitleFrameX;
@property(nonatomic) _Bool hasImageViewFrameHeight;
@property(nonatomic) _Bool hasImageViewFrameWidth;
@property(nonatomic) _Bool hasImageViewFrameY;
@property(nonatomic) _Bool hasImageViewFrameX;
@property(nonatomic) _Bool hasImagePosition;
@property(nonatomic) _Bool hasColumnSpan;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKPaletteToolView.h>

#import <PencilKit/PKPaletteErasingAttributesViewControllerDelegate-Protocol.h>
#import <PencilKit/PKPaletteErasingTool-Protocol.h>

@class NSString, UIViewController;

@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate>
{
    _Bool _bitmapEraser;
    UIViewController *_attributeViewController;
}

@property(nonatomic, getter=isBitmapEraser) _Bool bitmapEraser; // @synthesize bitmapEraser=_bitmapEraser;
- (void)erasingAttributesViewControllerDidChangeErasingType:(id)arg1;
- (void)_updateAttributesViewController;
- (id)attributeViewController;
- (id)toolIdentifier;
- (id)initWithToolIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

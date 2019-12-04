//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AnnotationKit/AKPopoverAnnotationEditor-Protocol.h>
#import <AnnotationKit/UIGestureRecognizerDelegate-Protocol.h>

@class AKAnnotation, AKAnnotationTheme, AKPageController, AKTouchOutsideViewGestureRecognizer, IMTheme, NSString, UIView;
@protocol AKAnnotationEditorDelegate;

@interface AKAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate, AKPopoverAnnotationEditor>
{
    AKTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    AKAnnotation *mAnnotation;
    AKPageController *mAnnotationPageController;
    AKAnnotationTheme *mAnnotationTheme;
    int mPosition;
    id mObserver;
    _Bool _editsOnLaunch;
    UIView *_presentationView;
    id <AKAnnotationEditorDelegate> _delegate;
    struct CGRect _presentationRect;
}

@property(nonatomic) __weak id <AKAnnotationEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool editsOnLaunch; // @synthesize editsOnLaunch=_editsOnLaunch;
@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(nonatomic) struct CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(nonatomic) int position; // @synthesize position=mPosition;
@property(retain, nonatomic) AKAnnotationTheme *annotationTheme; // @synthesize annotationTheme=mAnnotationTheme;
@property(retain, nonatomic) AKPageController *annotationPageController; // @synthesize annotationPageController=mAnnotationPageController;
@property(retain, nonatomic) AKAnnotation *annotation; // @synthesize annotation=mAnnotation;
- (void)hide;
- (void)didHide;
- (void)willHide;
- (void)didShow;
- (void)willShow;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;
- (int)willPresentInPosition:(struct CGRect)arg1 view:(id)arg2;
- (struct CGRect)p_containerFrameForView:(id)arg1;
- (_Bool)canPresentInPosition:(int)arg1;
- (void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)releaseOutlets;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IMTheme *theme;

@end


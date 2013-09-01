// Sprite.h: interface for the CSprite class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SPRITE_H__EF55BB89_B759_4127_87AB_1C6FD9D9006E__INCLUDED_)
#define AFX_SPRITE_H__EF55BB89_B759_4127_87AB_1C6FD9D9006E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CSprite  
{
public:
	CSprite(wxString cPathName, int iNthFile, wxDC *pDC);
	void DrawFullImage( wxDC* pDC, int cx, int cy );
	void DrawFrame( wxDC* pDC, short sFrame );
	virtual ~CSprite();
#if 0
	LPBITMAPINFOHEADER m_bih; //bmp �������
	LPBITMAPINFO m_bmpInfo;
#endif
	wxString m_cFileSize;
	int m_iScreenX;
	int m_iScreenY;
	short *	m_spData;
	char * m_lpDib;
	wxDC * BufferDC;
	int m_iTotalFrame;
};

#endif // !defined(AFX_SPRITE_H__EF55BB89_B759_4127_87AB_1C6FD9D9006E__INCLUDED_)

// ���ʃw�b�_
#ifndef ___COMMONHEADER___
#define ___COMMONHEADER___

const int SENTINEL = -2; // �ԕ������
extern int sqrNum; // ��ӂ̃}�X�ڂ̐�
extern int sqrX; // �Ֆʂ̃}�X�ڂ̈ʒu�B�����牽��ڂ��B
extern int sqrY; // �Ֆʂ̃}�X�ڂ̈ʒu�B�ォ�牽�s�ڂ��B
extern bool mvSwitch; // �����؂�ւ��p�t���O true�œ����f�[�^�����D��Afalse�ŕ`��D��
extern int width; // �E�B���h�E�̉���
extern int height; // �E�B���h�E�̏c��

void mouse(int, int, int, int); // �}�E�X
void keyboard(unsigned char, int, int); // �L�[�{�[�h

#endif